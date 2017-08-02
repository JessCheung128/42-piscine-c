#!/bin/sh
ldapsearch -Q -S -LLL "uid=*bon*" sn | grep "^sn:" | cut -c 5- | wc -l | tr -d " \t\r"
