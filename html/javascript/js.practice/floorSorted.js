//this code is wrong try to update it if i have some free time!
function findfloor(arr,target){
    left=0;
    right= arr.length-1;
    let floorele=-1;
    while(left<right){
        let mid = Math.floor((left +right)/2);
        if (arr[mid]<target){
            left=mid+1;
            floorele=arr[left];
        }
        else if (arr[mid]>target){
            right=mid-1;
        }
    }
    return floorele;
}
let arr=[3, 5, 8, 10, 15, 20];
console.log(findfloor(arr,9));