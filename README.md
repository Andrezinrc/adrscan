# rule_scan

Scanner simples baseado em regras, escrito em C.

## Uso

```bash
./adrscan rules [arquivo]
./adrscan --scan-dir <diretório>
```

## Descrição

- `rules` executa testes de regras  
- `--scan-dir` varredura recursiva usando `rules.txt`

## Exemplo

```bash
./scanner --scan-dir .
```

Varredura completa: 12 arquivos, 1 ameaça, 0.03s
