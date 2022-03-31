# Style stuff
ESC="$(printf '\033')"
# Normal
CN="${ESC}[0m"
# Red
CR="${ESC}[31m"
# Red bold
CRB="${ESC}[31;1m"
# Green
CG="${ESC}[32m"
# Green bold
CGB="${ESC}[32;1m"
# Yellow
CY="${ESC}[33m"
# Yellow bold
CYB="${ESC}[33;1m"
# Blue
CB="${ESC}[34m"
# Blue bold
CBB="${ESC}[34;1m"
# Purple
CP="${ESC}[35m"
# Purple bold
CPB="${ESC}[35;1m"
# Teal
CT="${ESC}[36m"
# Teal bold
CTB="${ESC}[36;1m"

# Verbosity
VERBOSE=false

# number of cores existant in the host
NUM_CPUS=$(nproc)

function log_begin_msg()
{
    local begin_msg=$1
    echo "${CB}[…] ${begin_msg}${CN}"
}

function log_ok_msg()
{
    local ok_msg=$1
    echo "${CG}[✔] ${ok_msg} ${CN}"
}

function log_warning_msg()
{
    local warning_msg=$1
    echo "${CY}[⚡] Warning: ${warning_msg} ${CN}"
}

function log_error_msg()
{
    local error_msg=$1
    echo "${CR}[✘] Error: ${error_msg} ${CN}"
}

function log_info_msg()
{
    local info_msg=$1
    echo "${CB}${info_msg} ${CN}"
}
