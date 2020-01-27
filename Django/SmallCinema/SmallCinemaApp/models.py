from django.db import models
from django.contrib import admin


class Language(models.Model):
    name = models.CharField(max_length=200)

    def __str__(self):
        return str(self.name)


class Movie(models.Model):
    name = models.CharField(max_length=200)
    length = models.IntegerField()
    rating = models.FloatField()
    language = models.ForeignKey(Language, on_delete=models.CASCADE)
    description = models.CharField(max_length=200)

    def __str__(self):
        return str(self.name)


class Hall(models.Model):
    name = models.CharField(max_length=200)
    description = models.CharField(max_length=200)

    def __str__(self):
        return str(self.name)


class Employee(models.Model):
    name = models.CharField(max_length=200)
    surname = models.CharField(max_length=200)
    email = models.EmailField()
    phone = models.IntegerField()
    employeeType = models.CharField(max_length=200)

    def __str__(self):
        return str(self.name)


class Showtime(models.Model):
    movie = models.ForeignKey(Movie, on_delete=models.CASCADE)
    hall = models.ForeignKey(Hall, on_delete=models.CASCADE)
    price = models.FloatField()
    datetime = models.DateTimeField()

    def __str__(self):
        return str(self.movie)


class ShowtimeAdmin(admin.ModelAdmin):
    actions = ['download_csv']
    list_display = ('movie', 'hall', 'price', 'datetime')

    def download_csv(self, request, queryset):
        import csv
        from django.http import HttpResponse

        f = open('export.csv', 'w')
        writer = csv.writer(f)
        writer.writerow(['movie', 'hall', 'price', 'datetime'])
        for s in queryset:
            writer.writerow([s.movie, s.hall, s.price, s.datetime])
        f.close()

        f = open('export.csv', 'r')
        response = HttpResponse(f, content_type='text/csv')
        response['Content-Disposition'] = 'attachment; filename=export.csv'
        return response

    download_csv.short_description = "Download CSV file."


class StudentsTicket(models.Model):
    price = models.FloatField()
    showtime = models.ForeignKey(Showtime, on_delete=models.CASCADE)
    name = models.CharField(max_length=200)
    surname = models.CharField(max_length=200)
    studentsNumber = models.CharField(max_length=200, blank=True, null=True)
    discount = models.FloatField()
    seat = models.IntegerField()

    def __str__(self):
        return str(self.name) + str(self.surname)

    class Meta:
        unique_together = ('showtime', 'seat',)


class ChildrenTicket(models.Model):
    price = models.FloatField()
    showtime = models.ForeignKey(Showtime, on_delete=models.CASCADE)
    name = models.CharField(max_length=200)
    surname = models.CharField(max_length=200)
    dateOfBirth = models.DateField(blank=True, null=True)
    discount = models.FloatField()
    seat = models.IntegerField()

    def __str__(self):
        return str(self.name) + str(self.surname)

    class Meta:
        unique_together = ('showtime', 'seat',)


class AdultsTicket(models.Model):
    price = models.FloatField()
    showtime = models.ForeignKey(Showtime, on_delete=models.CASCADE)
    seat = models.IntegerField()
    name = models.CharField(max_length=200)
    surname = models.CharField(max_length=200)

    def __str__(self):
        return str(self.name) + str(self.surname)

    class Meta:
        unique_together = ('showtime', 'seat',)


class Reservation(models.Model):
    name = models.CharField(max_length=200)
    surname = models.CharField(max_length=200)
    email = models.CharField(max_length=200)
    phone = models.IntegerField()
    showtime = models.ForeignKey(Showtime, on_delete=models.CASCADE)
    code = models.CharField(max_length=8)
    seat = models.IntegerField()

    def __str__(self):
        return str(self.name) + ", " + str(self.surname) + ", " + str(self.showtime)
