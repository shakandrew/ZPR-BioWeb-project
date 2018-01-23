import json
from prime.views import check_for_primeness
from django.http import HttpResponse
from django.shortcuts import render


def index(request):
    return render(request, 'index.html')


def prime(request):
    print("'"+request.GET["number"]+"'")
    data = {"prime": check_for_primeness(request.GET["number"])}
    return HttpResponse(json.dumps(data), content_type='application/json')
