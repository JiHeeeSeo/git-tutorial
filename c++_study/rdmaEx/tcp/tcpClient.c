#include "tcpHeader.h"

int main(int argc, char** argv){
    if (argc!=2){
        printf("Usage: %s IPv4-address\n", argv[0]);
        return -1;
    }

    // ������ ������ ���� ������ ���� ��������
    int client_socket;
    struct sockaddr_in server_addr;
    char buff[BUFF_SIZE+5];

    client_socket = socket(PF_INET)
}