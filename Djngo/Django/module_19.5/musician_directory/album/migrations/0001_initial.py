# Generated by Django 4.2.7 on 2023-12-26 04:05

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('musician', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Album',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('album_name', models.CharField(max_length=100)),
                ('release_date', models.DateTimeField(auto_now_add=True)),
                ('ratings', models.CharField(choices=[('1', 1), ('2', 2), ('3', 3), ('4', 4), ('5', 5)], max_length=2)),
                ('musician', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='musician.musician')),
            ],
        ),
    ]
