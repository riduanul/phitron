# Generated by Django 4.2.7 on 2023-12-28 04:06

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('cars', '0004_alter_car_image'),
    ]

    operations = [
        migrations.AddField(
            model_name='comment',
            name='car',
            field=models.ForeignKey(null=True, on_delete=django.db.models.deletion.CASCADE, related_name='comments', to='cars.car'),
        ),
    ]