#!/bin/sh
ldapsearch -Q -S cn "(uid=z*)" cn | grep "^cn:" | sort -rf | cut -c 5-
