#!/usr/bin/perl
#use strict;
#use warnings;

my $x = 10;

{
#	local $x = 5;
	print "value of x : $x \n";
	{
		print "value of x : $x \n";
	}

}
print "value of x : $x \n";

