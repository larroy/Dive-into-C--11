#!/usr/bin/python /usr/bin/scons
# -*- coding: utf-8 -*-

import os
import SCons.Errors
import pprint
import sys
import platform
import SCutils
import re

pp = pprint.PrettyPrinter(indent=4)

globals = {}


###############################################################
# User options:
#
# Disable colorized output and produce full compiler messages
#
AddOption('--verbose',
    dest='verbose',
    type='string',
    nargs=1,
    action='store',
    metavar='VERBOSE',
    help='verbose build')

AddOption('--build',
    dest='build',
    type='string',
    nargs=1,
    action='store',
    metavar='BLD',
    help='specify build=(debug|release)')

###############################################################


env = Configure(Environment()).Finish()

build = GetOption('build')
if not build:
    build = 'debug'

if not GetOption('verbose'):
    SCutils.setup_quiet_build(env)


env.Command('book.pdf', 'book.sgml', ["docbook2pdf < $SOURCES"])

