#include "scanner.h"

int main(int argc, char *argv[]) {
    if (argc<2) {
        printf("Uso: %s rules [arquivo]\n", argv[0]);
        printf("Exemplos:\n");
        printf("  %s rules                    # Teste todos arquivos\n", argv[0]);
        printf("  %s rules malware_test.bin   # Teste arquivo especifico\n", argv[0]);
        return 1;
    }
    
    create_test_file();
    
    if (strcmp(argv[1], "rules")==0) {
        if (argc==3) {
            run_rules_test(argv[2]);
        } else {
            run_rules_test(NULL);
        }
    }
    
    return 0;
}



