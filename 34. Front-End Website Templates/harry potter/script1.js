// const tick = document.querySelector('.tick')
// document.querySelector('.deactivate').addEventListener('click', () => {
//     tick.classList.toggle('click');
// })

// const labels = document.querySelectorAll('.no-good')

// labels.forEach(label => {

//     label.innerHTML = label.innerText
//         .split('')
//         .map((letter, idx) => `<span style="transition-delay:${idx * 50}ms">${letter}</span>`)
//         .join('')

// })

// const foots = document.querySelectorAll('.footstep')

// window.addEventListener('scroll', checkBoxes)

// checkBoxes()

// function checkBoxes() {
//     const triggerBottom = (window.innerHeight / 5 * 2)

//     foots.forEach(footstep => {
//         const boxTop = footstep.getBoundingClientRect().top

//         if (boxTop < triggerBottom) {
//             footstep.classList.add('show')
//         }
//         else {
//             footstep.classList.remove('show')
//         }
//     })
// }
window.onscroll = function () { myFunction() };

var navbar = document.getElementById("navbar");
var sticky = navbar.offsetTop;

function myFunction() {
    if (window.pageYOffset >= sticky) {
        navbar.classList.add("sticky")
    } else {
        navbar.classList.remove("sticky");
    }
}
document.onscroll = function () { scrollFunction() };
function scrollFunction() {
    if (document.body.scrollTop > 700 || document.documentElement.scrollTop > 700) {

        document.getElementById("navbar").style.background = "black";
    }
    else {

        document.getElementById("navbar").style.background = "none";
    }
}
// window.onscroll = function () {
//     var nvbar = document.getElementsById('navbar')[0];


//     if (window.scrollY > 100) {
//         nvbar.style.background = 'red';
//     }
//     else {
//         nvbar.style.background = '#4CFF00';
//     }
// }