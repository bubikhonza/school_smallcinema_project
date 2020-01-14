from django.db import models

class Language(models.Model):
    name = models.CharField()

class Movie(models.Model):
    name = models.CharField(max_length=200)
    length = models.IntegerField()
    rating = models.FloatField()
    language = models.ForeignKey(Language, on_delete=models.CASCADE)
    description = models.CharField()

class Hall(models.Model):
    name = models.CharField()
    description = models.CharField()

class EmployeeType(models.Model):
    name = models.CharField()


class Employee(models.Model):
    name = models.CharField()
    surename = models.CharField()
    email = models.EmailField()
    phonenumber = models.CharField()
    employeeType = models.ForeignKey(EmployeeType, on_delete=models.CASCADE)
    
class Showtime(models.Model):
    movie = models.ForeignKey(Movie, on_delete=models.CASCADE)
    hall = models.ForeignKey(Hall, on_delete=models.CASCADE)
    price = models.FloatField()
    datetime = models.DateTimeField()

class StudentsTicket(models.Model):
    price = models.FloatField()
    name = models.CharField()
    surename = models.CharField()
    studentsNumber = models.CharField()
    discount = models.FloatField()

class ChildrenTicket(models.Model):
    price = models.FloatField()
    name = models.CharField()
    surename = models.CharField()
    dateOfBirth = models.DateField()
    discount = models.FloatField()
    
class AdultsField(models.Model):
    price = models.FloatField()
    name = models.CharField()
    surename = models.CharField()