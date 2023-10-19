node*merge(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
}
node*c;
if(a->next<b->next){
    c=a;
    c->nest=merge(a->nest,b);
}
else{
    c=b;
    c->next=merge(a.b->next);
}
return c;