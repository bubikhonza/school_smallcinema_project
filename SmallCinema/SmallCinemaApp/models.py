from django.db import models

class Movie(models.Model):
    '''
    question_text = models.CharField(max_length=200)
    pub_date = models.DateTimeField('date published')
    '''

class Hall(models.Model):
    '''
    question = models.ForeignKey(Question, on_delete=models.CASCADE)
    choice_text = models.CharField(max_length=200)
    votes = models.IntegerField(default=0)
    '''