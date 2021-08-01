[@react.component]
let make = (~onClick) => {
    <div style=(ReactDOM.Style.make(~backgroundColor="#E7E8E9", ~borderRadius="4px", ~cursor="pointer", ~padding="16px 16px", ~margin="0px 16px", ())) onClick={onClick}>
        {ReasonReact.string("Randomise")} 
    </div>;
};