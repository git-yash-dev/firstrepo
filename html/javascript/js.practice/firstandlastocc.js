function checkocc(arr,target){
    let left =0;
    let right =arr.length-1;
    let first=-1;
    let last =-1;
    while (left <=right){
        let mid =Math.floor((left +right)/2);
        if (arr[mid] === target){
            first = mid;
            right = mid -1;
        }
        else if (arr[mid]<target){
            left = mid +1;
        }
        else{right=mid -1;}
    }
    left=0;
    right=arr.length -1;
    while (left<=right){
        let mid =Math.floor((left+right)/2);
        if (arr[mid ] === target ){
            last = mid;
            left = mid +1;
        }
        else if (arr[mid]<target){
            left = mid +1;
        }
        else{right=mid -1;}
    }
    console.log("first occurance "+ first);
    console.log("last occurance"+ last);
}
let arr=[2, 4, 10, 10, 10,10,10, 18, 20];
checkocc(arr,10); 