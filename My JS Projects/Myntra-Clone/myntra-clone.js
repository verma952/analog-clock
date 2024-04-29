
let items = [
     {
         id: '001',
         item_image:'image3.jpeg',
         rating: {
           stars:4.5,
           noOfReviews:1400,
          },
          company_name:'U.S. Polo Assn.',
          item_name:'Men Training Bomber Jacket',
          current_price:606,
          original_price:1045,
          dicount_percentage:'42',
          return_period:14,
          delivery_date:'10 Jan 2024'
        },
  { 
       id: '002',
       item_image:'image4.jpeg',
       rating: {
         stars:4.8,
         noOfReviews:100,
        },
        company_name:'U.S. Polo Assn.',
        item_name:'Men Training Bomber Jacket',
        current_price:750,
        original_price:1499,
        dicount_percentage:'44',
        return_period:14,
        delivery_date:'10 Jan 2024'
      },
      {  id: '003',
      item_image:'image4.jpeg',
      
      rating: {
        stars:3.5,
        noOfReviews:140,
      },
      company_name:'U.S. Polo Assn.',
      item_name:'Men Training Bomber Jacket',
      current_price:469,
      original_price:1299,
      dicount_percentage:'60',
      return_period:14,
      delivery_date:'10 Jan 2024'
    },
    {   id: '004',
    item_image:'image6.jpeg',
    rating: {
      stars:4.6,
      noOfReviews:230,
    },
    company_name:'U.S. Polo Assn.',
    item_name:'Men Training Bomber Jacket',
    current_price:899,
    original_price:1590,
    dicount_percentage:'38',
    return_period:14,
    delivery_date:'10 Jan 2024'
  },
  {   id: '005',
  item_image:'image7.jpeg',
  rating: {
    stars:4.1,
    noOfReviews:150,
  },
  company_name:'U.S. Polo Assn.',
  item_name:'Men Training Bomber Jacket',
  current_price:1099,
  original_price:1990,
  dicount_percentage:'48',
  return_period:14,
  delivery_date:'10 Jan 2024'
},
{   id: '006',
item_image:'image8.jpeg',
rating: {
  stars:4.7,
  noOfReviews:1500,
},
company_name:'U.S. Polo Assn.',
item_name:'Men Training Bomber Jacket',
current_price:1480,
original_price:2290,
dicount_percentage:'35',
return_period:14,
delivery_date:'10 Jan 2024'
},
{   id: '007',
item_image:'image9.jpeg',
rating: {
  stars:4.0,
  noOfReviews:148,
},
company_name:'U.S. Polo Assn.',
item_name:'Men Training Bomber Jacket',
current_price:790,
original_price:1499,
dicount_percentage:'46',
return_period:14,
delivery_date:'10 Jan 2024'
},
{   id: '008',
item_image:'image10.jpeg',
rating: {
  stars:3.9,
  noOfReviews:352,
},
company_name:'U.S. Polo Assn.',
item_name:'Men Training Bomber Jacket',
current_price:490,
original_price:1190,
dicount_percentage:'52',
return_period:14,
delivery_date:'10 Jan 2024'
},
{   id: '009',
item_image:'image25.jpeg',
rating: {
  stars:4.5,
  noOfReviews:1400,
},
company_name:'U.S. Polo Assn.',
item_name:'Men Training Bomber Jacket',
current_price:606,
original_price:1045,
dicount_percentage:'39',
return_period:14,
delivery_date:'10 Jan 2024'
},
{   id: '010',
item_image:'image26.jpeg',
rating: {
  stars:4.4,
  noOfReviews:930,
},
company_name:'U.S. Polo Assn.',
item_name:'Men Training Bomber Jacket',
current_price:590,
original_price:1050,
dicount_percentage:'46',
return_period:14,
delivery_date:'10 Jan 2024'
},
{   id:'011',
item_image:'image27.jpeg',
rating: {
  stars:3.8,
    noOfReviews:93,
  },
  company_name:'U.S. Polo Assn.',
  item_name:'Men Training Bomber Jacket',
  current_price: 480,
  original_price:1090,
  dicount_percentage:'52',
  return_period:14,
  delivery_date:'10 Jan 2024'
}
];

let itemsContainerElement = document.querySelector('.items-container');
function displayItemsOnHomepage(){
  let innerHTML = '';
  items.forEach((item) => {
      innerHTML += `<div class="item-container">
    <img class="item-image" src="${item.item_image}" alt="item image">
    <div class="rating">
    ${item.rating.stars} ⭐ | ${item.rating.noOfReviews}
    </div>
    <div class="company-name">${item.company_name}</div>
        <div class="item-name">${item.item_name}</div>
        <div class="price">
        <span class="current-price">Rs ${item.current_price}</span>
        <span class="original-price">Rs ${item.original_price}</span>
        <span class="dicount">(${item.dicount_percentage}% OFF)</span>
        </div>
        <button class="btn-add-bag" onclick = "addToBag(${item.id});">Add To Bag</button>
        </div>
        `;
    });
        itemsContainerElement.innerHTML = innerHTML;
      };
      let bagItems = [];
      let bagItemsStr = localStorage.getItem('bagItems');
      bagItems = bagItemsStr ? JSON.parse(bagItemsStr) : [];
      function addToBag(itemId){
        bagItems.push(itemId);
        localStorage.setItem('bagItems',JSON.stringify(bagItems));
        displayBagIcon();
      }
      console.log(bagItems);
      function displayBagIcon(){
        let bagItemCountElement = document.querySelector('.bag-item-count');
        if (bagItems.length > 0){
          bagItemCountElement.style.visibility = 'visible';
          bagItemCountElement.innerText = bagItems.length;
        }
        else {
          bagItemCountElement.style.visibility = 'hidden';
        }
      }
displayItemsOnHomepage();
displayBagIcon();
      
     