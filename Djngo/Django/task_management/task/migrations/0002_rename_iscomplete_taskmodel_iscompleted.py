# Generated by Django 4.2.7 on 2023-12-13 04:34

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('task', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='taskmodel',
            old_name='isComplete',
            new_name='isCompleted',
        ),
    ]
