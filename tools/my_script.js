// Called when Porymap successfully opens a project.
export function onProjectOpened(projectPath) {

}

// Called when Porymap closes a project. For example, this is called when opening a different project.
export function onProjectClosed(projectPath) {

}

// Called when a map is opened.
export function onMapOpened(mapName) {

}

function randInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
}

// These are the grass metatiles in pokefirered.
const grassTiles = [0x1, 0x4, 0xD];

// Called when a block is changed on the map. For example, this is called when a user paints a new tile or changes the collision property of a block.
export function onBlockChanged(x, y, prevBlock, newBlock) {
    // Check if the user is painting a grass tile.
    if (grassTiles.indexOf(newBlock.metatileId) != -1) {
        // Choose a random grass tile and paint it on the map.
        const i = randInt(0, grassTiles.length);
        map.setMetatileId(x, y, grassTiles[i]);
    }
}

// Called when a border metatile is changed.
export function onBorderMetatileChanged(x, y, prevMetatileId, newMetatileId) {

}

// Called when the mouse enters a new map block.
export function onBlockHoverChanged(x, y) {

}

// Called when the mouse exits the map.
export function onBlockHoverCleared() {

}

// Called when the dimensions of the map are changed.
export function onMapResized(oldWidth, oldHeight, newWidth, newHeight) {

}

// Called when the dimensions of the border are changed.
export function onBorderResized(oldWidth, oldHeight, newWidth, newHeight) {

}

// Called when the map is updated by use of the Map Shift tool.
export function onMapShifted(xDelta, yDelta) {

}

// Called when the currently loaded tileset is changed by switching to a new one or by saving changes to it in the Tileset Editor.
export function onTilesetUpdated(tilesetName) {

}

// Called when the selected tab in the main tab bar is changed.
// Tabs are indexed from left to right, starting at 0 (0: Map, 1: Events, 2: Header, 3: Connections, 4: Wild Pokemon).
export function onMainTabChanged(oldTab, newTab) {

}

// Called when the selected tab in the map view tab bar is changed.
// Tabs are indexed from left to right, starting at 0 (0: Metatiles, 1: Collision, 2: Prefabs).
export function onMapViewTabChanged(oldTab, newTab) {

}

// Called when the visibility of the border and connecting maps is toggled on or off.
export function onBorderVisibilityToggled(visible) {

}
