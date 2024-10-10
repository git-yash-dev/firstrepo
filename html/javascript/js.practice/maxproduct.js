function maxproduct(arr){
    let val=0;
    for (let i=0;i<arr.length;i++){
        let test=arr[i];
        let max=0;
        for (let f=0;f<arr.length;f++){
            if (i==f){continue;}
            else{
                let van=0;
                van=test*arr[f];
                if (van>max){max=van;}
            }
        }
        if (val<max){
            val=max;
        }
    }
    return val;
}
let arr=[7,8,5,7,5,2,1,5,7,2,6];
console.log(maxproduct(arr));