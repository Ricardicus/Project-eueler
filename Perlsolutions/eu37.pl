#!/usr/bin/perl
use strict;
use warnings;

my $max_nbr = 1000000;
my $sum = 0;
my @primes;
for my $n (2 .. $max_nbr){
	push @primes, 1;
}
$primes[0] = 0;
$primes[1] = 0;
my $i = 2;
while($i < $max_nbr){
	my $p = 2*$i;
	while($p<$max_nbr){
		$primes[$p] = 0;
		$p += $i;
	}
	$i++;
}
for my $q (8 .. $max_nbr){
	if($primes[$q]){
		my $s1 = $q.'';
		my $s2 = $s1;
		my $check1 = 1;
		while($s1 ne ''){
			if(not $primes[$s1+0]){
				$check1 = 0;
				last;
			}
			my $stop = length $s1;
			$s1 = substr $s1,1,$stop;
		}
		my $check2 = 1;
		while($s2 ne ''){
			if(not $primes[$s2+0]){
				$check2 = 0;
				last;
			}
			my $stop = length $s2;
			$s2 = substr $s2,0,$stop-1;
		}
		if($check1 && $check2){
			$sum += $q;
		}
	}
}
print "resulting sum is: $sum";