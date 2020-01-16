from django.shortcuts import render, redirect
from django.http import HttpResponse
from .models import *
from datetime import date
from datetime import time
import string
import random
from django.db.models import Q

def index(request):
    return render(request, 'index.html')

def display_showtimes(request):
    showtimes = Showtime.objects.all()
    print(showtimes)
    return render(request, 'showtimes.html', {'showtimes':showtimes})

def myticket(request):
    if(request.method == "GET"):
        if(Reservation.objects.filter(code=request.GET.get('ticket_num')).count() > 0):
            return redirect(display_my_reservation, res_code = request.GET.get('ticket_num'))

    return render(request, 'myticket.html')

def seat_reservation(request, showtime_id):
    def code_generator(size=6, chars=string.ascii_uppercase + string.digits):
        return ''.join(random.choice(chars) for _ in range(size))
    if(request.method == "POST"):
        seats = request.POST.getlist('seat')
        code = code_generator()
        for s in seats:
            r = Reservation()
            r.name = request.POST.get('name')
            r.surname = request.POST.get('surname')
            r.email = request.POST.get('email')
            r.phone = request.POST.get('phone')
            r.showtime = Showtime.objects.get(pk = showtime_id)
            r.seat = s
            r.code = code
            r.save()

        return redirect('reservation_thank_you', res_code=code)
    showtime = Showtime.objects.get(pk = showtime_id)
    objects = Reservation.objects.filter(showtime = Showtime.objects.get(pk=showtime_id))
    seats = []
    for o in objects:
        seats.append(o.seat)
    return render(request, 'seatreservation.html', {'showtime':showtime, 'seats':seats, 'range':range(21)})

def reservation_thank_you(request, res_code):
    return render(request, 'reservation_thank_you.html', {'code':res_code})

def display_my_reservation(request, res_code):
    reservations = Reservation.objects.filter(code=res_code)
    print(reservations.count())
    if(reservations.count() <= 0):
        return redirect(myticket)
    return render(request, 'display_my_reservation.html', {'reservations':reservations, 'code':res_code})

def remove_reservation_seating(request, res_code, seat):
    reservation = Reservation.objects.get(Q(code=res_code) & Q(seat = seat))
    reservation.delete()
    return redirect('display_my_reservation', res_code=res_code)
