require(ISLR)

names(Smarket)

head(Smarket)

summary(Smarket)

par(mfrow=c(1,8))
for(i in 1:8){
  hist(Smarket[,i], main=names(Smarket)[i])
}


par(mfrow=c(1,8))
for(i in 1:8){
  boxplot(Smarket[,i], main=names(Smarket)[i])
}



pairs(Smarket, col=Smarket$Direction)

glm.fit <- glm(Direction ~ Lag1 + Lag2 + Lag3 + Lag4 + Lag5 + Volume, data = Smarket, family = binomial)

#resumo da tabela
summary(glm.fit)


glm.probs <- predict(glm.fit,type = "response")
glm.probs[1:5]

glm.pred <- ifelse(glm.probs > 0.5, "Up", "Down")


#poode anexar dados a tabela após tratados
attach(Smarket)
table(glm.pred,Direction)


mean(glm.pred == Direction)


#treinamento e testes
train = Year<2005

glm.fit <- glm(Direction ~ Lag1 + Lag2 + Lag3 + Lag4 + Lag5 + Volume,
               data = Smarket,
               family = binomial,
               subset = train)

glm.probs <- predict(glm.fit,
                     newdata = Smarket[!train,],
                     type = "response")

glm.pred <- ifelse(glm.probs > 0.5, "Up", "Down")



