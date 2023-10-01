void escape(char s[], char t[], bool toCharacter) {
    //  t ==> s
    if (toCharacter) {
        int si = 0;
        for (int i = 0; t[i] != '\0'; ++i) {
            switch (t[i]) {
                case '\n':
                    s[si] = '\\';
                    s[++si] = 'n';
                    si++;
                    break;
                case '\t':
                    s[si] = '\\';
                    s[++si] = 't';
                    si++;
                    break;
                default:
                    s[si] = t[i];
                    si++;
            }
        }
    } else {
        int si = 0;
        for (int i = 0; t[i] != '\0'; ++i) {
            switch (t[i]) {
                case '\\':
                    switch (t[i+1]) {
                        case 'n':
                            s[si++] = '\n';
                            i++;
                            break;
                        case 't':
                            s[si++] = '\t';
                            i++;
                            break;
                        default:
                            s[si] = t[i];
                            si++;
                            break;
                    }
                    break;
                default:
                    s[si] = t[i];
                    si++;
            }
        }
    }
}