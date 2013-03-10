#!/bin/bash
function randomString() {
	pass=</dev/urandom tr -dc A-Za-z0-9 | head -c 7
	echo $pass
}

cd /tmp

name=`randomString`
import $name.png