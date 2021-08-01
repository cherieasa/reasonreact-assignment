open ContainerRowRef;
open ContainerRowState;

[@react.component]
let make = () =>
<div>
    <Title name="Cherie" />
    <MethodTitle method="Method 1: Using UseRef" />
    <ColorRowRef />
    <ColorRowRef />
    <ColorRowRef />
    <MethodTitle method="Method 2: Using UseState" />
    <ColorRowState />
    <ColorRowState />
    <ColorRowState />
</div>;