NAME
    script_generator

SYNOPSIS
    Script generator for the Air traffic simulation panel
    The program will create a file called [Pnb]_plane_[Tnb]_tower.rdr
        where [Pnb] correspond to the number of plane
        and   [Tnd] correspond to the number of tower
    if the file already exist, it will be overwritten

DESCRIPTION
    ./my_radar [OPTIONS] plane_number tower_number
    plane_number : The number of plane object to add to the script. The number as to be higher than 0
    tower_number : The number of tower object to add to the script. The number as to be between 0 and 10

    OPTIONS
        -h
            display the help

EXAMPLE
    ./script_generator -h
    ./script_generator 25

REPORTING BUG
    Their is no bug
