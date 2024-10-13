function countVowels(str){
    let numb=0;
    let par=str.split("");
    let vol="AEIOUaeiou";
    for (let i=0;i<par.length;i++){
        if (vol.includes(par[i])){
            numb++;
        }
    }
    return numb;
}
let str="hello world";
console.log(countVowels(str));
slo mo\be 