# Generated by Django 4.2.7 on 2023-12-28 07:02

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('cars', '0006_remove_order_brand_order_user'),
    ]

    operations = [
        migrations.AddField(
            model_name='brand',
            name='slug',
            field=models.SlugField(blank=True, max_length=100, null=True, unique=True),
        ),
    ]
