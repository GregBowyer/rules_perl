sv_setpv(config, "-DHAVE_DEV_PTMX -DHAVE_GETPT -DHAVE_GRANTPT -DHAVE_POSIX_OPENPT -DHAVE_PTSNAME -DHAVE_PTSNAME_R -DHAVE_PTY_H -DHAVE_SIGACTION -DHAVE_SYS_STROPTS_H -DHAVE_TERMIOS_H -DHAVE_TERMIO_H -DHAVE_TTYNAME -DHAVE_UNLOCKPT");
newCONSTSUB(stash, "B0", newSViv(B0));
newCONSTSUB(stash, "B110", newSViv(B110));
newCONSTSUB(stash, "B115200", newSViv(B115200));
newCONSTSUB(stash, "B1200", newSViv(B1200));
newCONSTSUB(stash, "B134", newSViv(B134));
newCONSTSUB(stash, "B150", newSViv(B150));
newCONSTSUB(stash, "B153600", newSV(0));
newCONSTSUB(stash, "B1800", newSViv(B1800));
newCONSTSUB(stash, "B19200", newSViv(B19200));
newCONSTSUB(stash, "B200", newSViv(B200));
newCONSTSUB(stash, "B230400", newSViv(B230400));
newCONSTSUB(stash, "B2400", newSViv(B2400));
newCONSTSUB(stash, "B300", newSViv(B300));
newCONSTSUB(stash, "B307200", newSV(0));
newCONSTSUB(stash, "B38400", newSViv(B38400));
newCONSTSUB(stash, "B460800", newSViv(B460800));
newCONSTSUB(stash, "B4800", newSViv(B4800));
newCONSTSUB(stash, "B50", newSViv(B50));
newCONSTSUB(stash, "B57600", newSViv(B57600));
newCONSTSUB(stash, "B600", newSViv(B600));
newCONSTSUB(stash, "B75", newSViv(B75));
newCONSTSUB(stash, "B76800", newSV(0));
newCONSTSUB(stash, "B9600", newSViv(B9600));
newCONSTSUB(stash, "BRKINT", newSViv(BRKINT));
newCONSTSUB(stash, "BS0", newSViv(BS0));
newCONSTSUB(stash, "BS1", newSViv(BS1));
newCONSTSUB(stash, "BSDLY", newSViv(BSDLY));
newCONSTSUB(stash, "CBAUD", newSViv(CBAUD));
newCONSTSUB(stash, "CBAUDEXT", newSV(0));
newCONSTSUB(stash, "CBRK", newSViv(CBRK));
newCONSTSUB(stash, "CCTS_OFLOW", newSV(0));
newCONSTSUB(stash, "CDEL", newSV(0));
newCONSTSUB(stash, "CDSUSP", newSViv(CDSUSP));
newCONSTSUB(stash, "CEOF", newSViv(CEOF));
newCONSTSUB(stash, "CEOL", newSViv(CEOL));
newCONSTSUB(stash, "CEOL2", newSV(0));
newCONSTSUB(stash, "CEOT", newSViv(CEOT));
newCONSTSUB(stash, "CERASE", newSViv(CERASE));
newCONSTSUB(stash, "CESC", newSV(0));
newCONSTSUB(stash, "CFLUSH", newSViv(CFLUSH));
newCONSTSUB(stash, "CIBAUD", newSViv(CIBAUD));
newCONSTSUB(stash, "CIBAUDEXT", newSV(0));
newCONSTSUB(stash, "CINTR", newSViv(CINTR));
newCONSTSUB(stash, "CKILL", newSViv(CKILL));
newCONSTSUB(stash, "CLNEXT", newSViv(CLNEXT));
newCONSTSUB(stash, "CLOCAL", newSViv(CLOCAL));
newCONSTSUB(stash, "CNSWTCH", newSV(0));
newCONSTSUB(stash, "CNUL", newSV(0));
newCONSTSUB(stash, "CQUIT", newSViv(CQUIT));
newCONSTSUB(stash, "CR0", newSViv(CR0));
newCONSTSUB(stash, "CR1", newSViv(CR1));
newCONSTSUB(stash, "CR2", newSViv(CR2));
newCONSTSUB(stash, "CR3", newSViv(CR3));
newCONSTSUB(stash, "CRDLY", newSViv(CRDLY));
newCONSTSUB(stash, "CREAD", newSViv(CREAD));
newCONSTSUB(stash, "CRPRNT", newSViv(CRPRNT));
newCONSTSUB(stash, "CRTSCTS", newSViv(CRTSCTS));
newCONSTSUB(stash, "CRTSXOFF", newSV(0));
newCONSTSUB(stash, "CRTS_IFLOW", newSV(0));
newCONSTSUB(stash, "CS5", newSViv(CS5));
newCONSTSUB(stash, "CS6", newSViv(CS6));
newCONSTSUB(stash, "CS7", newSViv(CS7));
newCONSTSUB(stash, "CS8", newSViv(CS8));
newCONSTSUB(stash, "CSIZE", newSViv(CSIZE));
newCONSTSUB(stash, "CSTART", newSViv(CSTART));
newCONSTSUB(stash, "CSTOP", newSViv(CSTOP));
newCONSTSUB(stash, "CSTOPB", newSViv(CSTOPB));
newCONSTSUB(stash, "CSUSP", newSViv(CSUSP));
newCONSTSUB(stash, "CSWTCH", newSV(0));
newCONSTSUB(stash, "CWERASE", newSViv(CWERASE));
newCONSTSUB(stash, "DEFECHO", newSV(0));
newCONSTSUB(stash, "DIOC", newSV(0));
newCONSTSUB(stash, "DIOCGETP", newSV(0));
newCONSTSUB(stash, "DIOCSETP", newSV(0));
newCONSTSUB(stash, "DOSMODE", newSV(0));
newCONSTSUB(stash, "ECHO", newSViv(ECHO));
newCONSTSUB(stash, "ECHOCTL", newSViv(ECHOCTL));
newCONSTSUB(stash, "ECHOE", newSViv(ECHOE));
newCONSTSUB(stash, "ECHOK", newSViv(ECHOK));
newCONSTSUB(stash, "ECHOKE", newSViv(ECHOKE));
newCONSTSUB(stash, "ECHONL", newSViv(ECHONL));
newCONSTSUB(stash, "ECHOPRT", newSViv(ECHOPRT));
newCONSTSUB(stash, "EXTA", newSViv(EXTA));
newCONSTSUB(stash, "EXTB", newSViv(EXTB));
newCONSTSUB(stash, "FF0", newSViv(FF0));
newCONSTSUB(stash, "FF1", newSViv(FF1));
newCONSTSUB(stash, "FFDLY", newSViv(FFDLY));
newCONSTSUB(stash, "FIORDCHK", newSV(0));
newCONSTSUB(stash, "FLUSHO", newSViv(FLUSHO));
newCONSTSUB(stash, "HUPCL", newSViv(HUPCL));
newCONSTSUB(stash, "ICANON", newSViv(ICANON));
newCONSTSUB(stash, "ICRNL", newSViv(ICRNL));
newCONSTSUB(stash, "IEXTEN", newSViv(IEXTEN));
newCONSTSUB(stash, "IGNBRK", newSViv(IGNBRK));
newCONSTSUB(stash, "IGNCR", newSViv(IGNCR));
newCONSTSUB(stash, "IGNPAR", newSViv(IGNPAR));
newCONSTSUB(stash, "IMAXBEL", newSViv(IMAXBEL));
newCONSTSUB(stash, "INLCR", newSViv(INLCR));
newCONSTSUB(stash, "INPCK", newSViv(INPCK));
newCONSTSUB(stash, "ISIG", newSViv(ISIG));
newCONSTSUB(stash, "ISTRIP", newSViv(ISTRIP));
newCONSTSUB(stash, "IUCLC", newSViv(IUCLC));
newCONSTSUB(stash, "IXANY", newSViv(IXANY));
newCONSTSUB(stash, "IXOFF", newSViv(IXOFF));
newCONSTSUB(stash, "IXON", newSViv(IXON));
newCONSTSUB(stash, "KBENABLED", newSV(0));
newCONSTSUB(stash, "LDCHG", newSV(0));
newCONSTSUB(stash, "LDCLOSE", newSV(0));
newCONSTSUB(stash, "LDDMAP", newSV(0));
newCONSTSUB(stash, "LDEMAP", newSV(0));
newCONSTSUB(stash, "LDGETT", newSV(0));
newCONSTSUB(stash, "LDGMAP", newSV(0));
newCONSTSUB(stash, "LDIOC", newSV(0));
newCONSTSUB(stash, "LDNMAP", newSV(0));
newCONSTSUB(stash, "LDOPEN", newSV(0));
newCONSTSUB(stash, "LDSETT", newSV(0));
newCONSTSUB(stash, "LDSMAP", newSV(0));
newCONSTSUB(stash, "LOBLK", newSV(0));
newCONSTSUB(stash, "NCCS", newSViv(NCCS));
newCONSTSUB(stash, "NL0", newSViv(NL0));
newCONSTSUB(stash, "NL1", newSViv(NL1));
newCONSTSUB(stash, "NLDLY", newSViv(NLDLY));
newCONSTSUB(stash, "NOFLSH", newSViv(NOFLSH));
newCONSTSUB(stash, "OCRNL", newSViv(OCRNL));
newCONSTSUB(stash, "OFDEL", newSViv(OFDEL));
newCONSTSUB(stash, "OFILL", newSViv(OFILL));
newCONSTSUB(stash, "OLCUC", newSViv(OLCUC));
newCONSTSUB(stash, "ONLCR", newSViv(ONLCR));
newCONSTSUB(stash, "ONLRET", newSViv(ONLRET));
newCONSTSUB(stash, "ONOCR", newSViv(ONOCR));
newCONSTSUB(stash, "OPOST", newSViv(OPOST));
newCONSTSUB(stash, "PAGEOUT", newSV(0));
newCONSTSUB(stash, "PARENB", newSViv(PARENB));
newCONSTSUB(stash, "PAREXT", newSV(0));
newCONSTSUB(stash, "PARMRK", newSViv(PARMRK));
newCONSTSUB(stash, "PARODD", newSViv(PARODD));
newCONSTSUB(stash, "PENDIN", newSViv(PENDIN));
newCONSTSUB(stash, "RCV1EN", newSV(0));
newCONSTSUB(stash, "RTS_TOG", newSV(0));
newCONSTSUB(stash, "TAB0", newSViv(TAB0));
newCONSTSUB(stash, "TAB1", newSViv(TAB1));
newCONSTSUB(stash, "TAB2", newSViv(TAB2));
newCONSTSUB(stash, "TAB3", newSViv(TAB3));
newCONSTSUB(stash, "TABDLY", newSViv(TABDLY));
newCONSTSUB(stash, "TCDSET", newSV(0));
newCONSTSUB(stash, "TCFLSH", newSViv(TCFLSH));
newCONSTSUB(stash, "TCGETA", newSViv(TCGETA));
newCONSTSUB(stash, "TCGETS", newSViv(TCGETS));
newCONSTSUB(stash, "TCIFLUSH", newSViv(TCIFLUSH));
newCONSTSUB(stash, "TCIOFF", newSViv(TCIOFF));
newCONSTSUB(stash, "TCIOFLUSH", newSViv(TCIOFLUSH));
newCONSTSUB(stash, "TCION", newSViv(TCION));
newCONSTSUB(stash, "TCOFLUSH", newSViv(TCOFLUSH));
newCONSTSUB(stash, "TCOOFF", newSViv(TCOOFF));
newCONSTSUB(stash, "TCOON", newSViv(TCOON));
newCONSTSUB(stash, "TCSADRAIN", newSViv(TCSADRAIN));
newCONSTSUB(stash, "TCSAFLUSH", newSViv(TCSAFLUSH));
newCONSTSUB(stash, "TCSANOW", newSViv(TCSANOW));
newCONSTSUB(stash, "TCSBRK", newSViv(TCSBRK));
newCONSTSUB(stash, "TCSETA", newSViv(TCSETA));
newCONSTSUB(stash, "TCSETAF", newSViv(TCSETAF));
newCONSTSUB(stash, "TCSETAW", newSViv(TCSETAW));
newCONSTSUB(stash, "TCSETCTTY", newSV(0));
newCONSTSUB(stash, "TCSETS", newSViv(TCSETS));
newCONSTSUB(stash, "TCSETSF", newSViv(TCSETSF));
newCONSTSUB(stash, "TCSETSW", newSViv(TCSETSW));
newCONSTSUB(stash, "TCXONC", newSViv(TCXONC));
newCONSTSUB(stash, "TERM_D40", newSV(0));
newCONSTSUB(stash, "TERM_D42", newSV(0));
newCONSTSUB(stash, "TERM_H45", newSV(0));
newCONSTSUB(stash, "TERM_NONE", newSV(0));
newCONSTSUB(stash, "TERM_TEC", newSV(0));
newCONSTSUB(stash, "TERM_TEX", newSV(0));
newCONSTSUB(stash, "TERM_V10", newSV(0));
newCONSTSUB(stash, "TERM_V61", newSV(0));
newCONSTSUB(stash, "TIOCCBRK", newSViv(TIOCCBRK));
newCONSTSUB(stash, "TIOCCDTR", newSV(0));
newCONSTSUB(stash, "TIOCCONS", newSViv(TIOCCONS));
newCONSTSUB(stash, "TIOCEXCL", newSViv(TIOCEXCL));
newCONSTSUB(stash, "TIOCFLUSH", newSV(0));
newCONSTSUB(stash, "TIOCGETC", newSV(0));
newCONSTSUB(stash, "TIOCGETD", newSViv(TIOCGETD));
newCONSTSUB(stash, "TIOCGETP", newSV(0));
newCONSTSUB(stash, "TIOCGLTC", newSV(0));
newCONSTSUB(stash, "TIOCGPGRP", newSViv(TIOCGPGRP));
newCONSTSUB(stash, "TIOCGSID", newSViv(TIOCGSID));
newCONSTSUB(stash, "TIOCGSOFTCAR", newSViv(TIOCGSOFTCAR));
newCONSTSUB(stash, "TIOCGWINSZ", newSViv(TIOCGWINSZ));
newCONSTSUB(stash, "TIOCHPCL", newSV(0));
newCONSTSUB(stash, "TIOCKBOF", newSV(0));
newCONSTSUB(stash, "TIOCKBON", newSV(0));
newCONSTSUB(stash, "TIOCLBIC", newSV(0));
newCONSTSUB(stash, "TIOCLBIS", newSV(0));
newCONSTSUB(stash, "TIOCLGET", newSV(0));
newCONSTSUB(stash, "TIOCLSET", newSV(0));
newCONSTSUB(stash, "TIOCMBIC", newSViv(TIOCMBIC));
newCONSTSUB(stash, "TIOCMBIS", newSViv(TIOCMBIS));
newCONSTSUB(stash, "TIOCMGET", newSViv(TIOCMGET));
newCONSTSUB(stash, "TIOCMSET", newSViv(TIOCMSET));
newCONSTSUB(stash, "TIOCM_CAR", newSViv(TIOCM_CAR));
newCONSTSUB(stash, "TIOCM_CD", newSViv(TIOCM_CD));
newCONSTSUB(stash, "TIOCM_CTS", newSViv(TIOCM_CTS));
newCONSTSUB(stash, "TIOCM_DSR", newSViv(TIOCM_DSR));
newCONSTSUB(stash, "TIOCM_DTR", newSViv(TIOCM_DTR));
newCONSTSUB(stash, "TIOCM_LE", newSViv(TIOCM_LE));
newCONSTSUB(stash, "TIOCM_RI", newSViv(TIOCM_RI));
newCONSTSUB(stash, "TIOCM_RNG", newSViv(TIOCM_RNG));
newCONSTSUB(stash, "TIOCM_RTS", newSViv(TIOCM_RTS));
newCONSTSUB(stash, "TIOCM_SR", newSViv(TIOCM_SR));
newCONSTSUB(stash, "TIOCM_ST", newSViv(TIOCM_ST));
newCONSTSUB(stash, "TIOCNOTTY", newSViv(TIOCNOTTY));
newCONSTSUB(stash, "TIOCNXCL", newSViv(TIOCNXCL));
newCONSTSUB(stash, "TIOCOUTQ", newSViv(TIOCOUTQ));
newCONSTSUB(stash, "TIOCREMOTE", newSV(0));
newCONSTSUB(stash, "TIOCSBRK", newSViv(TIOCSBRK));
newCONSTSUB(stash, "TIOCSCTTY", newSViv(TIOCSCTTY));
newCONSTSUB(stash, "TIOCSDTR", newSV(0));
newCONSTSUB(stash, "TIOCSETC", newSV(0));
newCONSTSUB(stash, "TIOCSETD", newSViv(TIOCSETD));
newCONSTSUB(stash, "TIOCSETN", newSV(0));
newCONSTSUB(stash, "TIOCSETP", newSV(0));
newCONSTSUB(stash, "TIOCSIGNAL", newSV(0));
newCONSTSUB(stash, "TIOCSLTC", newSV(0));
newCONSTSUB(stash, "TIOCSPGRP", newSViv(TIOCSPGRP));
newCONSTSUB(stash, "TIOCSSID", newSV(0));
newCONSTSUB(stash, "TIOCSSOFTCAR", newSViv(TIOCSSOFTCAR));
newCONSTSUB(stash, "TIOCSTART", newSV(0));
newCONSTSUB(stash, "TIOCSTI", newSViv(TIOCSTI));
newCONSTSUB(stash, "TIOCSTOP", newSV(0));
newCONSTSUB(stash, "TIOCSWINSZ", newSViv(TIOCSWINSZ));
newCONSTSUB(stash, "TM_ANL", newSV(0));
newCONSTSUB(stash, "TM_CECHO", newSV(0));
newCONSTSUB(stash, "TM_CINVIS", newSV(0));
newCONSTSUB(stash, "TM_LCF", newSV(0));
newCONSTSUB(stash, "TM_NONE", newSV(0));
newCONSTSUB(stash, "TM_SET", newSV(0));
newCONSTSUB(stash, "TM_SNL", newSV(0));
newCONSTSUB(stash, "TOSTOP", newSViv(TOSTOP));
newCONSTSUB(stash, "VCEOF", newSV(0));
newCONSTSUB(stash, "VCEOL", newSV(0));
newCONSTSUB(stash, "VDISCARD", newSViv(VDISCARD));
newCONSTSUB(stash, "VDSUSP", newSV(0));
newCONSTSUB(stash, "VEOF", newSViv(VEOF));
newCONSTSUB(stash, "VEOL", newSViv(VEOL));
newCONSTSUB(stash, "VEOL2", newSViv(VEOL2));
newCONSTSUB(stash, "VERASE", newSViv(VERASE));
newCONSTSUB(stash, "VINTR", newSViv(VINTR));
newCONSTSUB(stash, "VKILL", newSViv(VKILL));
newCONSTSUB(stash, "VLNEXT", newSViv(VLNEXT));
newCONSTSUB(stash, "VMIN", newSViv(VMIN));
newCONSTSUB(stash, "VQUIT", newSViv(VQUIT));
newCONSTSUB(stash, "VREPRINT", newSViv(VREPRINT));
newCONSTSUB(stash, "VSTART", newSViv(VSTART));
newCONSTSUB(stash, "VSTOP", newSViv(VSTOP));
newCONSTSUB(stash, "VSUSP", newSViv(VSUSP));
newCONSTSUB(stash, "VSWTCH", newSV(0));
newCONSTSUB(stash, "VT0", newSViv(VT0));
newCONSTSUB(stash, "VT1", newSViv(VT1));
newCONSTSUB(stash, "VTDLY", newSViv(VTDLY));
newCONSTSUB(stash, "VTIME", newSViv(VTIME));
newCONSTSUB(stash, "VWERASE", newSViv(VWERASE));
newCONSTSUB(stash, "WRAP", newSV(0));
newCONSTSUB(stash, "XCASE", newSViv(XCASE));
newCONSTSUB(stash, "XCLUDE", newSV(0));
newCONSTSUB(stash, "XMT1EN", newSV(0));
newCONSTSUB(stash, "XTABS", newSViv(XTABS));
