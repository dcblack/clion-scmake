#!make -f
#
# Project: hello

SRCS := main.cpp hello.cpp

# Do not edit below here
RULES:=$(firstword $(wildcard $(addsuffix /Makefile.defs,${SCC_APPS}/make ../../.. ../.. .. .)))
$(if ${RULES},$(info INFO: Including $(realpath ${RULES})),$(error Could not find Makefile.defs))
include ${RULES}
