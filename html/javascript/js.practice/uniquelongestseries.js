function uniqq(stri){
    let diff =stri.split("");
    let uni =[];
    let fu=0;
    for (let i=0;i<=diff.length;i++){
        let temp=[];
        for (let f=fu;f<=diff.length;f++){
            if (!uni.includes(diff[f])){
                temp.push(diff[f]);
            }
            else{
                fu++
            }
            
        }
        if(temp>uni){
            uni =temp;
        }
    }
    return uni.length;
}
let stri="pwkktri";
console.log(uniqq(stri));