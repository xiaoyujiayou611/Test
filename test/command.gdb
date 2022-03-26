define mycommand
    shell rm gdb.log
    set logging file ./gdb.log
    set logging on
    run
    thread apply all bt
    set logging off
    quit
end

mycommand

