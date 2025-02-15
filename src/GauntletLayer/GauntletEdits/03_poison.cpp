#include "../GauntletLayer.hpp"

using namespace geode::prelude;

void RedesignedGauntletLayer::editPoisonGauntlet() {
    auto director = CCDirector::sharedDirector();
    auto winSize = director->getWinSize();

    editGauntletSingle("Poison", ccc3(20, 63, 9), ccc3(229, 255, 0), ccc3(80, 179, 0));
    GameManager::get()->loadBackground(31);
    
    m_backgroundSprite->setTexture(CCTextureCache::sharedTextureCache()->textureForKey(GameManager::get()->getBGTexture(31)));

    auto enableParticles = Mod::get()->getSettingValue<bool>("enable-background-particles");
	if (enableParticles) {
        // bubbles
        auto bgParticleNode1 = CCParticleSystemQuad::create();
        if (bgParticleNode1) {
            CCParticleSystemQuad* bgParticles = GameToolbox::particleFromString("50a-1a2a0.45a6a90a90a0a0a300a0a0a52a0a0a0a0a10a5a0a43a0.309804a0a0.905882a0a0.360784a0a1a0.05a0a0a0a38a0.00392157a0a0.486275a0a0.0392157a0a0.5a0.15a0a0a0.25a0a0a0a0a0a0a0a0a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0", NULL, false);
            bgParticles->setPosition(ccp(winSize.width / 2, director->getScreenBottom() - 10));
            bgParticles->setZOrder(-98);
            this->addChild(bgParticles);
        }
        // smoke
        auto bgParticleNode2 = CCParticleSystemQuad::create();
        if (bgParticleNode2) {
            CCParticleSystemQuad* bgParticles = GameToolbox::particleFromString("65a-1a2a0.45a26a90a90a0a0a300a0a0a30a0a0a0a0a50a5a0a43a0.309804a0a0.905882a0a0.360784a0a0.1a0.05a100a10a0a38a0.00392157a0a0.486275a0a0.0392157a0a0a0.15a0.39a0a0.5a0a0a0a0a0a0a0a0a2a1a0a0a0a46a0a0a0a0a0a0a0a0a0a0a0a0a0a0", NULL, false);
            bgParticles->setPosition(ccp(winSize.width / 2, director->getScreenBottom() - 10));
            bgParticles->setZOrder(-98);
            this->addChild(bgParticles);
        }
    }
}