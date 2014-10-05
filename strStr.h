char *strStr(char *haystack, char *needle) {
        if(!haystack||!needle)
            return NULL;
        int hlen=strlen(haystack);
        int nlen=strlen(needle);
        if(hlen<nlen) 
            return NULL;
        for(int i=0;i<hlen-nlen+1;i++){
            char *iter=haystack+i;
            int j;
            for(j=0;j<nlen;j++,iter++){
                if(*iter!=needle[j])
                    break;
            }
            if(j==nlen)
                return haystack+i;
        }
        return NULL;
}
