
from django.urls import path

from . import views

urlpatterns = [
    path('', views.index, name='index'),
    path('showtimes/', views.display_showtimes, name='display_showtimes'),
    path('myticket/', views.myticket, name='myticket'),
    path('seatreservation/<int:showtime_id>', views.seat_reservation, name="seat_reservation"),
    path('seatreservation/thank-you/<str:res_code>', views.reservation_thank_you, name="reservation_thank_you"),
    path('seatreservation/my-reservation/<str:res_code>', views.display_my_reservation, name="display_my_reservation"),
    path('seatreservation/removeseating/<str:res_code>/<int:seat>', views.remove_reservation_seating, name="remove_reservation_seating"),



]