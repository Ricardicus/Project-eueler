#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lnkdlst
{
	struct lnkdlst *next;
	long data;
};

void freethenumbers(struct lnkdlst *nbr);
void printnumber(struct lnkdlst *nbr);
void sumnumber(struct lnkdlst *nbr, long data, long carryin);
void sumnumbers(struct lnkdlst *carryer, struct lnkdlst *adder);
struct lnkdlst * createnumber(char *nbr);

int main()
{
	char * nbr = calloc(50,sizeof(char));

	/*First number*/	
	strcpy(nbr,"37107287533902102798797998220837590246510135740250");

	struct lnkdlst * first = createnumber(nbr);

	/*Second number*/
	strcpy(nbr,"46376937677490009712648124896970078050417018260538");
	struct lnkdlst * second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*Third number*/
	strcpy(nbr,"74324986199524741059474233309513058123726617309629");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*Fourth number*/
	strcpy(nbr,"91942213363574161572522430563301811072406154908250");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*5th*/
	strcpy(nbr,"23067588207539346171171980310421047513778063246676");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*6th*/
	strcpy(nbr,"89261670696623633820136378418383684178734361726757");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*7th*/
	strcpy(nbr,"28112879812849979408065481931592621691275889832738");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*8th*/
	strcpy(nbr,"44274228917432520321923589422876796487670272189318");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*9th*/
	strcpy(nbr,"47451445736001306439091167216856844588711603153276");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*10th*/
	strcpy(nbr,"70386486105843025439939619828917593665686757934951");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*11th*/
	strcpy(nbr,"62176457141856560629502157223196586755079324193331");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*12th*/
	strcpy(nbr,"64906352462741904929101432445813822663347944758178");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*13th*/
	strcpy(nbr,"92575867718337217661963751590579239728245598838407");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*14*/
	strcpy(nbr,"58203565325359399008402633568948830189458628227828");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*15*/
	strcpy(nbr,"80181199384826282014278194139940567587151170094390");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*16*/
	strcpy(nbr,"35398664372827112653829987240784473053190104293586");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*17*/
	strcpy(nbr,"86515506006295864861532075273371959191420517255829");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*18*/
	strcpy(nbr,"71693888707715466499115593487603532921714970056938");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*19*/
	strcpy(nbr,"54370070576826684624621495650076471787294438377604");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*20*/
	strcpy(nbr,"53282654108756828443191190634694037855217779295145");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*21*/
	strcpy(nbr,"36123272525000296071075082563815656710885258350721");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*22*/
	strcpy(nbr,"45876576172410976447339110607218265236877223636045");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*23*/
	strcpy(nbr,"17423706905851860660448207621209813287860733969412");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*24*/
	strcpy(nbr,"81142660418086830619328460811191061556940512689692");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*25*/
	strcpy(nbr,"51934325451728388641918047049293215058642563049483");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*26*/
	strcpy(nbr,"62467221648435076201727918039944693004732956340691");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*27*/
	strcpy(nbr,"15732444386908125794514089057706229429197107928209");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*28*/
	strcpy(nbr,"55037687525678773091862540744969844508330393682126");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*29*/
	strcpy(nbr,"18336384825330154686196124348767681297534375946515");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*30*/
	strcpy(nbr,"80386287592878490201521685554828717201219257766954");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*31*/
	strcpy(nbr,"78182833757993103614740356856449095527097864797581");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*32*/
	strcpy(nbr,"16726320100436897842553539920931837441497806860984");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*33*/
	strcpy(nbr,"48403098129077791799088218795327364475675590848030");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*34*/
	strcpy(nbr,"87086987551392711854517078544161852424320693150332");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*35*/
	strcpy(nbr,"59959406895756536782107074926966537676326235447210");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*36*/
	strcpy(nbr,"69793950679652694742597709739166693763042633987085");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*37*/
	strcpy(nbr,"41052684708299085211399427365734116182760315001271");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*38*/
	strcpy(nbr,"65378607361501080857009149939512557028198746004375");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*39*/
	strcpy(nbr,"35829035317434717326932123578154982629742552737307");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*40*/
	strcpy(nbr,"94953759765105305946966067683156574377167401875275");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*41*/
	strcpy(nbr,"88902802571733229619176668713819931811048770190271");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*42*/
	strcpy(nbr,"25267680276078003013678680992525463401061632866526");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*43*/
	strcpy(nbr,"36270218540497705585629946580636237993140746255962");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*44*/
	strcpy(nbr,"24074486908231174977792365466257246923322810917141");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*45*/
	strcpy(nbr,"91430288197103288597806669760892938638285025333403");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*46*/
	strcpy(nbr,"34413065578016127815921815005561868836468420090470");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*47*/
	strcpy(nbr,"23053081172816430487623791969842487255036638784583");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);
	
	/*48*/
	strcpy(nbr,"11487696932154902810424020138335124462181441773470");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*49*/
	strcpy(nbr,"63783299490636259666498587618221225225512486764533");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*50*/
	strcpy(nbr,"67720186971698544312419572409913959008952310058822");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*51*/
	strcpy(nbr,"95548255300263520781532296796249481641953868218774");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*52*/
	strcpy(nbr,"76085327132285723110424803456124867697064507995236");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*53*/
	strcpy(nbr,"37774242535411291684276865538926205024910326572967");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*54*/
	strcpy(nbr,"23701913275725675285653248258265463092207058596522");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*55*/
	strcpy(nbr,"29798860272258331913126375147341994889534765745501");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*56*/
	strcpy(nbr,"18495701454879288984856827726077713721403798879715");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*57*/
	strcpy(nbr,"38298203783031473527721580348144513491373226651381");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*58*/
	strcpy(nbr,"34829543829199918180278916522431027392251122869539");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*59*/
	strcpy(nbr,"40957953066405232632538044100059654939159879593635");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*60*/
	strcpy(nbr,"29746152185502371307642255121183693803580388584903");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*61*/
	strcpy(nbr,"41698116222072977186158236678424689157993532961922");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*62*/
	strcpy(nbr,"62467957194401269043877107275048102390895523597457");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*63*/
	strcpy(nbr,"23189706772547915061505504953922979530901129967519");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*64*/
	strcpy(nbr,"86188088225875314529584099251203829009407770775672");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*65*/
	strcpy(nbr,"11306739708304724483816533873502340845647058077308");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*66*/
	strcpy(nbr,"82959174767140363198008187129011875491310547126581");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*67*/
	strcpy(nbr,"97623331044818386269515456334926366572897563400500");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*68*/
	strcpy(nbr,"42846280183517070527831839425882145521227251250327");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*69*/
	strcpy(nbr,"55121603546981200581762165212827652751691296897789");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*70*/
	strcpy(nbr,"32238195734329339946437501907836945765883352399886");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*71*/
	strcpy(nbr,"75506164965184775180738168837861091527357929701337");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*72*/
	strcpy(nbr,"62177842752192623401942399639168044983993173312731");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*73*/
	strcpy(nbr,"32924185707147349566916674687634660915035914677504");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*74*/
	strcpy(nbr,"99518671430235219628894890102423325116913619626622");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*75*/
	strcpy(nbr,"73267460800591547471830798392868535206946944540724");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*76*/
	strcpy(nbr,"76841822524674417161514036427982273348055556214818");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*77*/
	strcpy(nbr,"97142617910342598647204516893989422179826088076852");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*78*/
	strcpy(nbr,"87783646182799346313767754307809363333018982642090");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*79*/
	strcpy(nbr,"10848802521674670883215120185883543223812876952786");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*80*/
	strcpy(nbr,"71329612474782464538636993009049310363619763878039");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*81*/
	strcpy(nbr,"62184073572399794223406235393808339651327408011116");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*82*/
	strcpy(nbr,"66627891981488087797941876876144230030984490851411");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*83*/
	strcpy(nbr,"60661826293682836764744779239180335110989069790714");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*84*/
	strcpy(nbr,"85786944089552990653640447425576083659976645795096");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*85*/
	strcpy(nbr,"66024396409905389607120198219976047599490197230297");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*86*/
	strcpy(nbr,"64913982680032973156037120041377903785566085089252");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*87*/
	strcpy(nbr,"16730939319872750275468906903707539413042652315011");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*88*/
	strcpy(nbr,"94809377245048795150954100921645863754710598436791");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*89*/
	strcpy(nbr,"78639167021187492431995700641917969777599028300699");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*90*/
	strcpy(nbr,"15368713711936614952811305876380278410754449733078");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*91*/
	strcpy(nbr,"40789923115535562561142322423255033685442488917353");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*92*/
	strcpy(nbr,"44889911501440648020369068063960672322193204149535");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*93*/
	strcpy(nbr,"41503128880339536053299340368006977710650566631954");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*94*/
	strcpy(nbr,"81234880673210146739058568557934581403627822703280");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*95*/
	strcpy(nbr,"82616570773948327592232845941706525094512325230608");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*96*/
	strcpy(nbr,"22918802058777319719839450180888072429661980811197");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*97*/
	strcpy(nbr,"77158542502016545090413245809786882778948721859617");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*98*/
	strcpy(nbr,"72107838435069186155435662884062257473692284509516");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*99*/
	strcpy(nbr,"20849603980134001723930671666823555245252804609722");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	/*100*/
	strcpy(nbr,"53503534226472524250874054075591789781264330331690");
	second = createnumber(nbr);
	sumnumbers(first,second);
	freethenumbers(second);

	printf("Final number:\n");
	printnumber(first);

	free(nbr);
	freethenumbers(first);

	return 0;
}

void freethenumbers(struct lnkdlst *first)
{
	struct lnkdlst *ptr = first;
	struct lnkdlst *ptr2;

	while(ptr!=NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		free(ptr2);
	}
}

void printnumber(struct lnkdlst *first)
{
	struct lnkdlst *ptr = first;
	struct lnkdlst *ptr2;
	
	int i = 1;
	while(ptr!=NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		printf("number %i has data: %ld\n",i,ptr2->data); 
		i++;
	}
}

void sumnumber(struct lnkdlst *nbr, long data, long carryin)
{	
	long result = nbr->data + data + carryin;
	long overflow = result/10000000000;
	if(overflow > 0)
	{
		if(nbr->next == NULL)
		{
			struct lnkdlst * newnumber = malloc(sizeof(struct lnkdlst));
			newnumber->next=NULL;
			newnumber->data=overflow;
			nbr->next=newnumber;
		}
		else
		{
			sumnumber(nbr->next,0,overflow);
		}
		nbr->data = result%10000000000;
	}
	else
	{
		nbr->data=result;
	}
}

void sumnumbers(struct lnkdlst *carryer, struct lnkdlst *adder)
{
	struct lnkdlst *ptr1 = carryer;
	struct lnkdlst *ptr2 = adder;

	while(ptr1!=NULL && ptr2!=NULL)
	{
		sumnumber(ptr1,ptr2->data,0);
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}	
}

struct lnkdlst * createnumber(char * nbr)
{
	struct lnkdlst *first = calloc(1,sizeof(struct lnkdlst));
	first->next=NULL;
	first->data = 0;

	struct lnkdlst *ptr = first;
	
	int i = 4;
	int m = 0;
	while(i>-1)
	{
		char * n = calloc(11,sizeof(char));
		m = 0;
		while(m<10)
		{	
			n[m] = nbr[i*10+m];
			m++;	
		}
		n[m] = '\0'; 
		ptr->data = atol(n);
		free(n);

		struct lnkdlst *newnbr = calloc(1,sizeof(struct lnkdlst));
		newnbr->next=NULL;
		newnbr->data = 0;

		ptr->next = newnbr;
		ptr = newnbr; 

		i--;
	}

	/* Getting rid of the last piece.. */
	ptr = first;
	struct lnkdlst *ptr2;
	while(ptr->next!=NULL)
	{
		ptr2=ptr;
		ptr = ptr->next;
	}	
	free(ptr);
	ptr2->next = NULL;

	return first;

}

