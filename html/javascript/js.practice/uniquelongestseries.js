function uniqqsub(s){
    let uni=[];
    let temp=[];
    let counter=0;
    while (counter!=s.length){
        for (let i=counter;i<s.length;i++){
            if (!temp.includes(s[i])){
                temp.push(s[i]);
                counter++;
            }
            else{
                break;
            }
        }
        if (temp.length>uni.length){
            uni=temp;
            temp=[];
        }
    }
    return uni.length;
}
let str="pwkkdim";
console.log(uniqqsub(str));