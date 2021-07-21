[@react.component]
let make = (~name) =>
    <div>{ReasonReact.string("Name: " ++ name)} </div>;