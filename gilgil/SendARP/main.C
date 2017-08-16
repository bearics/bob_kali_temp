#include <QCoreApplication>
#include <stdio.h>
#include <pcap.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netinet/ether.h>
#include <arpa/inet.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    pcap_t *handle;			/* Session handle */
    char *dev;			/* The device to sniff on */
    char errbuf[PCAP_ERRBUF_SIZE];	/* Error string */
    struct bpf_program fp;		/* The compiled filter */
    char filter_exp[] = "port 80";	/* The filter expression */
    bpf_u_int32 mask;		/* Our netmask */
    bpf_u_int32 net;		/* Our IP */
    struct pcap_pkthdr *header;	/* The header that pcap gives us */

    int res;
    const u_char *pkt;
    u_char send_pkt[100];
    struct tm *ltime;
    char timestr[16];
    time_t local_tv_sec;
    char buf[INET_ADDRSTRLEN];

    char  buff[100];
    FILE *fp2;

    fp2 = popen( "route", "r");
    if ( NULL == fp)
    {
       perror( "popen() 실패");
       return -1;
    }

    while( fgets( buff, 100, fp) )
       printf( "%s", buff);

    pclose( fp);
    return 0;
}
