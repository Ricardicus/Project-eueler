#!/usr/bin/perl -w
use strict;
use warnings;
use 5.010;

say eu40();

sub eu40 {
	my $str = "";
	for my $nbr (0 .. 1000000){
		$str = $str . $nbr;
	}
	my $i = 1;
	my $res = 1;
	while($i <= 1000000){
		$res = $res * substr($str,$i,1);
		$i *= 10;
	}
	return $res;
}