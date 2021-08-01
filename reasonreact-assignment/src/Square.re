[@react.component]
let make = (~color) => 
    <div style=(ReactDOM.Style.make(~backgroundColor=color, ~height="80px", ~width="80px", ()))/>;