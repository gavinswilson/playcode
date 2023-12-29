#!/usr/bin/perl 
use warnings;

# print a message
{
    print ("hello world!", "\n");
    print "another message\n" ;
    {
        print "second level\n" ;
        print 'second level\n' ;
        print "\n";
        print "C:\\WINNT\\Profiles\\test\\\n";
        print 'C:\WINNT\Profiles\test\ ', "\n"; #notice the space after the \ it allows \' to not be recognised as an escape'
    }
}
print "\n", 01101, "\n";

print 0xBEEF, "\n";


print 25, " ", -4, "\n";

print 25_000_000, " ", -4, "\n";

print 22/7, "\n";

