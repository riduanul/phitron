# Generated by Django 4.2.7 on 2023-12-11 09:56

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0001_initial'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='studentmodel',
            name='id',
        ),
        migrations.AlterField(
            model_name='studentmodel',
            name='roll',
            field=models.IntegerField(primary_key=True, serialize=False),
        ),
    ]
