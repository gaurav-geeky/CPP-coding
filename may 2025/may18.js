//   array add 
//      Input: l1 = [2,4,3], l2 = [5,6,4]
//      Output: [7,0,8]
//      Explanation: 342 + 465 = 807.

let arr1 = [2, 4, 3]; 
let arr2 = [5, 6, 4]; 

let arrRev = arr1.reverse(); 
console.log(arrRev);

let carRev = arr2.reverse(); 
console.log(carRev); 

let sum; 

for (let i=0; i<3; i++) { 

    for ( let j =0+1; j<3; j++) { 

        if ( i == j ){ 
             sum = arrRev[i] + carRev[j]; 
        }
    }
}
console.log(sum);




























