window.onload=() => {
   displayItems();
}
let todoListStr =  localStorage.getItem('todoList');

var todoList = JSON.parse(todoListStr);//|| [{item:""},{dueDate:""}];
let savedData = localStorage.getItem('todoList');
 
 function addToDo(){
    let inputElement = document.querySelector('#todo-input');
    let dateElement =document.querySelector("#todo-date");
    let todoItem = inputElement.value;
    let todoDate = dateElement.value;
    todoList.push({item:todoItem,dueDate:todoDate});
    inputElement.value ='';
    dateElement.value ='';
    displayItems();
 }

 function displayItems(){
    
    let displayElements = document.querySelector('.todo-container');
    let newHtml =  ``;
       for(let i = 0; i < todoList.length; i++){
         let {item, dueDate} = todoList[i];
           newHtml += `
                    <span>${item}</span>
                    <span>${dueDate}</span>
                    <button class ='delete-todo' onclick = "todoList.splice(${i},1);displayItems();">Delete</button>` 
    }
    displayElements.innerHTML = newHtml;
    localStorage.setItem('todoList', JSON.stringify(todoList));
 }