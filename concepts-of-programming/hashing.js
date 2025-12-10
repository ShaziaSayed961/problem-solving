//basic hashing 
let num=[1,2,3,1,3,4]
let array = new Array(6).fill(0)
for(let i=0;i<num.length;i++){
  array[num[i]]++
}
console.log(array)


