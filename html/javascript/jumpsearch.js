function jumpsearch(arr,target){
    let prev=0;
    const jump=Math.floor(Math.sqrt(arr.length));
    let current =jump;
    while(arr[current]<target){
        prev=current;
        current+=jump;
    }
    for(let i=prev;i<current;i--){
        if (arr[i]===target){
            return i;
        }
    }
}
let arr=[2,4,5,6,7,8];
console.log(jumpsearch(arr,5))