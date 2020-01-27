from django.contrib import admin
from .models import *

admin.site.register(Movie)
admin.site.register(Language)
admin.site.register(Showtime, ShowtimeAdmin)

# Register your models here.
