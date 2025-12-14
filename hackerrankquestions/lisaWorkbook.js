
function workbook(n, k, arr) {
     let page=1
  let counter=0
  for(let i=0;i<arr.length;i++){
    let target=1
  
    while(target<=arr[i]){
      if(target===page){
       counter++ 
      }
       if(target%k===0){
        page++
      }
       target++
      
      console.log(page,target)
    }
    if((target - 1) % k !== 0)page++
    
  }
  return counter
}

console.log(workbook(2, 3, [4,2]));//1
console.log(workbook(5, 3, [4, 2, 6 ,1 ,10]));//4
console.log(workbook(10, 5, [3 ,8 ,15, 11 ,14 ,1 ,9, 2, 24 ,31]));//8