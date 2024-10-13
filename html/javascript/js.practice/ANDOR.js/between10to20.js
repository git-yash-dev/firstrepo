function IsInRange(a,b){
    if (9<a&& a<21||9<b && b<21){
        return true;
    }
    else{return false;}
}
console.group(IsInRange(10,6));