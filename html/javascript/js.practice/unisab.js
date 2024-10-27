function unisab(stri){
    let test=[];
    for (let i=0;i<stri.length;i++){
        let it=stri[i];
        let fl=i;
        let check=0;
        if (!test.includes(it)){
            test.push(it);
        }
        else{
            while(fl<=stri.length){
                if (test.includes(it)){
                    it+=stri[i+1];
                    check++;
                    continue;
                }
                else{
                    test.push(it);
                    break;
                }
                fl++;
            }
            i+=check;
        }
    }
    return test.length;
}
let stri="ababccc";
console.log(unisab(stri));