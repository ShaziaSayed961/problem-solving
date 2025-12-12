function getTotalX(a, b) {
let sortedArrayOfB=b.toSorted()
let sortedArrayOfA=a.toSorted()
let storageArray=[]
for(let i=1;i<=sortedArrayOfB[0];i++){
  if(sortedArrayOfB[0]%i===0 && i%sortedArrayOfA[sortedArrayOfA.length-1]===0){
    storageArray.push(i)
  }
}


let newArray=[]
for(let i=0;i<storageArray.length;i++){
  let counter=0
  for(let j=0;j<sortedArrayOfB.length;j++){
    if(sortedArrayOfB[j]%storageArray[i]===0){
      counter++
    }
  }
  if(counter===b.length){
    newArray.push(storageArray[i])
  }
}


let finalArray=[]
for(let i=0;i<newArray.length;i++){
  let counter=0 
  for(let j=0;j<sortedArrayOfA.length;j++){
    if(newArray[i]%sortedArrayOfA[j]===0){
      counter++
    }
    
  }
  if(counter===a.length){
    finalArray.push(newArray[i])
  }
}


return finalArray.length
}
console.log(getTotalX([2,6], [24,36]));//2 - 6 12
console.log(getTotalX([2,4], [16,32,96]));//3- 4, 8 and 16 
console.log(getTotalX([1], [100]));//9 
